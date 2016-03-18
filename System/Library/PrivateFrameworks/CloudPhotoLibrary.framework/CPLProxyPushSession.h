/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLProxySession.h>
#import <libobjc.A.dylib/CPLPushChangeSessionImplementation.h>

@class NSString;

@interface CPLProxyPushSession : CPLProxySession <CPLPushChangeSessionImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

