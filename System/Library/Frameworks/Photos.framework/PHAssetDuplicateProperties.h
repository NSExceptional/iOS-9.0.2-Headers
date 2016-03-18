/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, NSData, NSString;

@interface PHAssetDuplicateProperties : NSObject {

	PHAsset* _asset;
	NSData* _originalHash;
	NSString* _publicGlobalUUID;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSData * originalHash;                    //@synthesize originalHash=_originalHash - In the implementation block
@property (nonatomic,retain) NSString * publicGlobalUUID;              //@synthesize publicGlobalUUID=_publicGlobalUUID - In the implementation block
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(PHAsset *)asset;
-(NSString *)publicGlobalUUID;
-(NSData *)originalHash;
-(void)setPublicGlobalUUID:(NSString *)arg1 ;
-(void)setOriginalHash:(NSData *)arg1 ;
@end
