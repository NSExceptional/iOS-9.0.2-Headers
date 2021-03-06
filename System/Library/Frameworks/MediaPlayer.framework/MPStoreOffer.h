/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL;

@interface MPStoreOffer : NSObject {

	NSDictionary* _offerDictionary;
	MPStoreOffer* _regularPriceOffer;
	NSDictionary* _mediaAssetDictionary;
	unsigned long long _entityPersistentID;
	long long _entityType;
	NSString* _entityTitle;
	long long _passType;

}

@property (nonatomic,readonly) long long entityType;                                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) unsigned long long entityPersistentID;                 //@synthesize entityPersistentID=_entityPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityTitle;                           //@synthesize entityTitle=_entityTitle - In the implementation block
@property (nonatomic,readonly) long long buyType; 
@property (nonatomic,readonly) long long passType;                                    //@synthesize passType=_passType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * displayTitle; 
@property (nonatomic,copy,readonly) NSString * actionDisplayTitle; 
@property (nonatomic,readonly) BOOL requiresConfirmation; 
@property (nonatomic,copy,readonly) NSString * displayPrice; 
@property (nonatomic,readonly) float price; 
@property (nonatomic,copy,readonly) NSString * regularPriceDisplayPrice; 
@property (nonatomic,readonly) unsigned long long downloadSize; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) double previewDuration; 
+(long long)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(long long)arg2 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variant:(long long)arg4 ;
+(long long)buyTypeForOfferDictionary:(id)arg1 regularPriceOffer:(id)arg2 ;
+(id)offerVariantResponseKeyForOfferVariant:(long long)arg1 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4 ;
+(id)_priceForOfferDictionary:(id)arg1 ;
-(double)previewDuration;
-(NSURL *)previewURL;
-(long long)buyType;
-(id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(long long)arg3 entityType:(long long)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6 ;
-(long long)passType;
-(BOOL)_isBuy;
-(NSString *)actionDisplayTitle;
-(NSString *)displayPrice;
-(id)buyURL;
-(BOOL)requiresConfirmation;
-(NSString *)regularPriceDisplayPrice;
-(unsigned long long)downloadSize;
-(id)storeOfferDictionary;
-(unsigned long long)entityPersistentID;
-(NSString *)entityTitle;
-(NSString *)displayTitle;
-(long long)entityType;
-(NSString *)buyParameters;
-(float)price;
@end

