/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, NSString, NSDictionary;

@interface PKRemoteAssetManifest : NSObject {

	NSURL* _fileURL;
	NSMutableDictionary* _remoteAssets;
	NSString* _name;

}

@property (nonatomic,readonly) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteAssets;              //@synthesize remoteAssets=_remoteAssets - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(NSURL *)fileURL;
-(id)deviceSpecificAsset;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3 ;
-(id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(NSDictionary *)remoteAssets;
@end
