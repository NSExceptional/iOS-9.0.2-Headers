/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RadioArtworkCollection, RadioStation, NSString, NSDictionary;

@interface RURadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	RadioArtworkCollection* _artworkCollection;
	BOOL _hasSetArtworkCollection;
	BOOL _hasSetStationHash;
	BOOL _hasSetStationID;
	BOOL _hasSetStationName;
	BOOL _hasSetStationStringID;
	BOOL _hasValidRadioStation;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,readonly) RadioStation * station;                                  //@synthesize station=_station - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary; 
@property (nonatomic,copy,readonly) NSString * stationName; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
+(BOOL)supportsSecureCoding;
-(id)_station;
-(id)initWithStationStringID:(id)arg1 ;
-(NSString *)stationStringID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(long long)stationID;
-(NSString *)stationName;
-(NSDictionary *)stationDictionary;
-(BOOL)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(NSString *)stationHash;
-(RadioArtworkCollection *)artworkCollection;
-(RadioStation *)station;
@end

