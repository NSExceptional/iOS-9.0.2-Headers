/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAppDOMPlayer;

@interface IKPlaylistElement : IKViewElement

@property (nonatomic,retain,readonly) NSArray * items; 
@property (nonatomic,retain,readonly) IKAppDOMPlayer * player; 
+(id)supportedFeatures;
-(IKAppDOMPlayer *)player;
-(NSArray *)items;
@end

