/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/_MDExtensionContext.h>
#import <libobjc.A.dylib/_MDRemoteExtensionContextProtocol.h>

@class NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getLastUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(id)_extensionRequestHandler;
-(id)hostContext;
-(void)dealloc;
-(NSString *)description;
@end

