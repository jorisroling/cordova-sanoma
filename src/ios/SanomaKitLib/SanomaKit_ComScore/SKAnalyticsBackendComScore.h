//
//  SKAnalyticsBackendComScore.h
//  HS
//
//  Created by Teemu Korhonen on 12/11/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsBackend.h"


@interface SKAnalyticsBackendComScore : SKAnalyticsBackend

- (id)initWithSitename:(NSString *)siteName;

- (void)sendData:(SKAnalyticsEvent *)event;

#pragma mark - StreamSense

#pragma mark Persistent Labels

- (void)setMediaPlayerName:(NSString*)mediaPlayerName;
- (void)setMediaPlayerVersion:(NSString*)mediaPlayerVersion;
- (void)setImplementationType:(NSString*)implementationType; // c: default, s, p
- (void)setPlaybackBitRate:(int)playbackBitRate; // 0-100
- (void)setPlayerWindowState:(NSString*)playerWindowState; // norm: default, full, max, min
- (void)setPlayerVolumeLevel:(int)playerVolumeLevel; // 0-100
- (void)setCustomLabels:(NSDictionary *)customLabels;

#pragma mark Playlist Labels

- (void)setPlaylistWithTitle:(NSString*)title length:(int)length numberOfClips:(int)numberOfClips;
- (void)setPlaylistWithTitle:(NSString*)title length:(int)length numberOfClips:(int)numberOfClips customLabels:(NSDictionary*)customLabels;

#pragma mark Clip Labels

- (void)setClipWithNumber:(int)number contentID:(NSString*)contentID clipLength:(int)clipLength partNumber:(int)partNumber totalParts:(int)totalParts;
- (void)setClipWithNumber:(int)number contentID:(NSString*)contentID clipLength:(int)clipLength partNumber:(int)partNumber totalParts:(int)totalParts episodeLength:(int)episodeLength publisherBrandname:(NSString*)publisherBrandName programTitle:(NSString*)programTitle episodeTitle:(NSString*)episodeTitle streamType:(NSString*)streamType contentGenre:(NSString*)contentGenre productionDate:(NSString*)productionDate stationTitle:(NSString*)stationTitle monetaryValue:(NSString*)monetaryValue advertisementFlag:(BOOL)advertisementFlag liveFlag:(BOOL)liveFlag videoDimensions:(NSString*)videoDimensions clipURL:(NSString*)clipURL;
- (void)setClipWithNumber:(int)number contentID:(NSString*)contentID clipLength:(int)clipLength partNumber:(int)partNumber totalParts:(int)totalParts episodeLength:(int)episodeLength publisherBrandname:(NSString*)publisherBrandName programTitle:(NSString*)programTitle episodeTitle:(NSString*)episodeTitle streamType:(NSString*)streamType contentGenre:(NSString*)contentGenre productionDate:(NSString*)productionDate stationTitle:(NSString*)stationTitle monetaryValue:(NSString*)monetaryValue advertisementFlag:(BOOL)advertisementFlag liveFlag:(BOOL)liveFlag videoDimensions:(NSString*)videoDimensions clipURL:(NSString*)clipURL customLabels:(NSDictionary*)customLabels;

@end
