var dive = require('dive');
var fs = require('fs');
var eyes=require('eyes').inspector({});
var argv = require('minimist')(process.argv.slice(2),{});

var root='src/ios/SanomaKitLib';
 
dive(root, {directories:true,ignore:false}, function(err, file, stat) {
	if (err) throw err;
	// fs.stat(file, function (err, stat) {
		if (stat) {
			if (! /\..+\//.test(file) && (!stat.isDirectory() || /[^\/]+\.[^\/]+$/.test(file))) {
				// console.log(file);
				var pos=file.indexOf(root);
				var part=file.slice(pos);
				var xml='';
				if (/\.m$/.test(part) || /\.c$/.test(part)) {
					xml='<source-file src="'+part+'" />';
				} else if (/\.h$/.test(part)) {
					xml='<header-file src="'+part+'" />';
				} else if (/\.a$/.test(part)) {
					xml='<source-file src="'+part+'" framework="true" />';
				} else if (/\.bundle$/.test(part)) {
					xml='<resource-file src="'+part+'" />';
				} else if (/\.framework$/.test(part)) {
					xml='<framework src="'+part+'" custom="true" />';
				}
				
				
				//
				if (xml) {
					if (!argv.check) console.log(xml);
						// eyes({xml:xml});
				} else {
					eyes({part:part});
				}
			}
		}
	// })
}, function() {
	// console.log('complete');
}); 
