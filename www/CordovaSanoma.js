var argscheck = require('cordova/argscheck'),
utils = require('cordova/utils'),
exec = require('cordova/exec');

module.exports = {

  logout: function(success, failure) {
    exec(success || function() {},
         failure || function() {},
         "CordovaSanoma",
         "logout",
         []);
  },
  
  showPluginDialog: function(screen, success, failure) {
    exec(success || function() {},
         failure || function() {},
         "CordovaSanoma",
         "showPluginDialog",
         [screen]);
  },

  

};
