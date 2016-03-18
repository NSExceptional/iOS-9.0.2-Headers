/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceInternal, NSString;

@interface AVOutputDevice : NSObject {

	AVOutputDeviceInternal* _outputDevice;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * ID; 
+(id)sharedLocalDevice;
-(id)_weakReference;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(double)frecencyScore;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(void)updateFrecencyScore;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)ID;
-(void)finalize;
@end

