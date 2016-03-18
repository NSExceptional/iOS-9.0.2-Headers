/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, NSData;

@interface PHAssetMomentProperties : NSObject {

	BOOL _reverseLocationDataIsValid;
	PHAsset* _asset;
	NSData* _reverseLocationData;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) BOOL reverseLocationDataIsValid;              //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,readonly) NSData * reverseLocationData;                 //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(NSData *)reverseLocationData;
-(PHAsset *)asset;
-(BOOL)reverseLocationDataIsValid;
@end

