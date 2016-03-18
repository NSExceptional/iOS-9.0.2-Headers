/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ALCity : NSObject {

	int _identifier;
	NSString* _localeCode;
	NSString* _timeZone;
	float _longitude;
	float _latitude;
	NSString* _yahooCode;
	NSString* _name;
	NSString* _unlocalizedName;
	NSString* _countryName;
	NSString* _unlocalizedCountryName;
	NSString* _countryOverride;
	NSString* _unlocalizedCountryOverride;
	NSString* _identifierForCPCity;
	BOOL _localizationAttempted;

}

@property (nonatomic,readonly) NSString * classicIdentifier; 
@property (nonatomic,readonly) NSDictionary * properties; 
@property (assign,nonatomic) int identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localeCode;                              //@synthesize localeCode=_localeCode - In the implementation block
@property (nonatomic,retain) NSString * timeZone;                                //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) float longitude;                                    //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float latitude;                                     //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * yahooCode;                               //@synthesize yahooCode=_yahooCode - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * unlocalizedName; 
@property (nonatomic,retain) NSString * countryName; 
@property (nonatomic,retain) NSString * unlocalizedCountryName; 
@property (nonatomic,retain) NSString * countryOverride; 
@property (nonatomic,retain) NSString * unlocalizedCountryOverride;              //@synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride - In the implementation block
-(id)displayNameIncludingCountry:(BOOL)arg1 ;
-(float)latitude;
-(float)longitude;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)identifier;
-(void)setTimeZone:(NSString *)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(NSString *)timeZone;
-(id)initWithProperties:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(NSString *)unlocalizedName;
-(void)setCountryOverride:(NSString *)arg1 ;
-(id)initWithSQLRow:(char**)arg1 ;
-(NSString *)countryOverride;
-(void)ensureLocalized;
-(NSString *)unlocalizedCountryOverride;
-(void)setLocaleCode:(NSString *)arg1 ;
-(void)setYahooCode:(NSString *)arg1 ;
-(void)setUnlocalizedCountryOverride:(NSString *)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(NSString *)localeCode;
-(NSString *)classicIdentifier;
-(id)displayNameIncludingCountry:(BOOL)arg1 withFormat:(id)arg2 ;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(NSString *)yahooCode;
@end

