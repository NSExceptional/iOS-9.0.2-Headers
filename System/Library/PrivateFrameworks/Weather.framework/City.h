/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Weather/Weather-Structs.h>
@class NSString, NSMutableArray, NSDate, CLLocation, NSTimeZone, MKSearchCompletion, NSTimer, NSHashTable, NSDictionary;

@interface City : NSObject {

	NSString* _updateTimeString;
	NSMutableArray* _dayForecasts;
	NSMutableArray* _hourlyForecasts;
	BOOL _autoUpdate;
	BOOL _isDay;
	BOOL _isLocalWeatherCity;
	BOOL _transient;
	BOOL _isHourlyDataCelsius;
	BOOL _dataCelsius;
	BOOL _isUpdating;
	BOOL _isRequestedByFrameworkClient;
	BOOL _lockedForDemoMode;
	BOOL _updatingTimeZone;
	float _windChill;
	float _windDirection;
	float _windSpeed;
	float _humidity;
	float _visibility;
	float _pressure;
	float _dewPoint;
	float _feelsLike;
	float _heatIndex;
	int _lastUpdateStatus;
	int _updateInterval;
	NSString* _temperature;
	NSDate* _updateTime;
	unsigned long long _conditionCode;
	NSString* _name;
	NSString* _state;
	unsigned long long _observationTime;
	unsigned long long _sunsetTime;
	unsigned long long _sunriseTime;
	unsigned long long _moonPhase;
	unsigned long long _uvIndex;
	double _precipitationPast24Hours;
	NSString* _link;
	NSString* _deeplink;
	CLLocation* _location;
	long long _secondsFromGMT;
	NSTimeZone* _timeZone;
	NSDate* _timeZoneUpdateDate;
	unsigned long long _lastUpdateDetail;
	long long _pressureRising;
	unsigned long long _lastUpdateWarning;
	NSString* _fullName;
	MKSearchCompletion* _searchCompletion;
	NSTimer* _autoUpdateTimer;
	NSHashTable* _cityUpdateObservers;

}

@property (readonly) NSDictionary * urlComponents; 
@property (assign,nonatomic) BOOL isLocalWeatherCity;                                      //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                            //@synthesize transient=_transient - In the implementation block
@property (nonatomic,copy) NSString * woeid; 
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * locationID; 
@property (nonatomic,copy) NSString * state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * temperature;                                         //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) unsigned long long conditionCode;                             //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) unsigned long long observationTime;                           //@synthesize observationTime=_observationTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunsetTime;                                //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunriseTime;                               //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (assign,nonatomic) unsigned long long moonPhase;                                 //@synthesize moonPhase=_moonPhase - In the implementation block
@property (assign,setter=setUVIndex:,nonatomic) unsigned long long uvIndex;                //@synthesize uvIndex=_uvIndex - In the implementation block
@property (assign,nonatomic) double precipitationPast24Hours;                              //@synthesize precipitationPast24Hours=_precipitationPast24Hours - In the implementation block
@property (nonatomic,copy) NSString * link;                                                //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * deeplink;                                            //@synthesize deeplink=_deeplink - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) long long secondsFromGMT;                                     //@synthesize secondsFromGMT=_secondsFromGMT - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                        //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSDate * timeZoneUpdateDate;                                  //@synthesize timeZoneUpdateDate=_timeZoneUpdateDate - In the implementation block
@property (assign,nonatomic) BOOL isHourlyDataCelsius;                                     //@synthesize isHourlyDataCelsius=_isHourlyDataCelsius - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateDetail;                          //@synthesize lastUpdateDetail=_lastUpdateDetail - In the implementation block
@property (nonatomic,retain) NSDate * updateTime;                                          //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,getter=isDataCelsius,nonatomic) BOOL dataCelsius;                        //@synthesize dataCelsius=_dataCelsius - In the implementation block
@property (assign,nonatomic) float windChill;                                              //@synthesize windChill=_windChill - In the implementation block
@property (assign,nonatomic) float windDirection;                                          //@synthesize windDirection=_windDirection - In the implementation block
@property (assign,nonatomic) float windSpeed;                                              //@synthesize windSpeed=_windSpeed - In the implementation block
@property (assign,nonatomic) float humidity;                                               //@synthesize humidity=_humidity - In the implementation block
@property (assign,nonatomic) float visibility;                                             //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) float pressure;                                               //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) long long pressureRising;                                     //@synthesize pressureRising=_pressureRising - In the implementation block
@property (assign,nonatomic) float dewPoint;                                               //@synthesize dewPoint=_dewPoint - In the implementation block
@property (assign,nonatomic) float feelsLike;                                              //@synthesize feelsLike=_feelsLike - In the implementation block
@property (assign,nonatomic) float heatIndex;                                              //@synthesize heatIndex=_heatIndex - In the implementation block
@property (assign,nonatomic) BOOL isDay; 
@property (assign,nonatomic) int lastUpdateStatus;                                         //@synthesize lastUpdateStatus=_lastUpdateStatus - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateWarning;                         //@synthesize lastUpdateWarning=_lastUpdateWarning - In the implementation block
@property (assign,nonatomic) BOOL isUpdating;                                              //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign,nonatomic) BOOL isRequestedByFrameworkClient;                            //@synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient - In the implementation block
@property (assign,nonatomic) BOOL lockedForDemoMode;                                       //@synthesize lockedForDemoMode=_lockedForDemoMode - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                            //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) MKSearchCompletion * searchCompletion;                        //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (assign,nonatomic) int updateInterval;                                           //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) NSTimer * autoUpdateTimer;                                    //@synthesize autoUpdateTimer=_autoUpdateTimer - In the implementation block
@property (assign,getter=isUpdatingTimeZone,nonatomic) BOOL updatingTimeZone;              //@synthesize updatingTimeZone=_updatingTimeZone - In the implementation block
@property (nonatomic,retain) NSHashTable * cityUpdateObservers;                            //@synthesize cityUpdateObservers=_cityUpdateObservers - In the implementation block
+(id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3 ;
+(id)descriptionForWeatherUpdateDetail:(unsigned long long)arg1 ;
-(NSDictionary *)urlComponents;
-(long long)secondsFromGMT;
-(BOOL)isUpdating;
-(BOOL)_isUpdating;
-(double)latitude;
-(double)longitude;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(int)updateInterval;
-(void)setUpdateInterval:(int)arg1 ;
-(void)update;
-(CLLocation *)location;
-(id)dictionaryRepresentation;
-(NSTimeZone *)timeZone;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)displayName;
-(BOOL)isTransient;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(void)setSearchCompletion:(MKSearchCompletion *)arg1 ;
-(MKSearchCompletion *)searchCompletion;
-(float)pressure;
-(void)setTransient:(BOOL)arg1 ;
-(id)updateTimeString;
-(void)setSecondsFromGMT:(long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)detailedDescription;
-(NSDate *)updateTime;
-(void)setUpdateTime:(NSDate *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(NSString *)locationID;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(unsigned long long)conditionCode;
-(void)setConditionCode:(unsigned long long)arg1 ;
-(float)dewPoint;
-(void)setDewPoint:(float)arg1 ;
-(float)heatIndex;
-(void)setHeatIndex:(float)arg1 ;
-(unsigned long long)moonPhase;
-(void)setMoonPhase:(unsigned long long)arg1 ;
-(NSString *)temperature;
-(void)setTemperature:(NSString *)arg1 ;
-(unsigned long long)uvIndex;
-(void)setVisibility:(float)arg1 ;
-(float)windChill;
-(void)setWindChill:(float)arg1 ;
-(float)windSpeed;
-(void)setWindSpeed:(float)arg1 ;
-(float)windDirection;
-(void)setWindDirection:(float)arg1 ;
-(id)hourlyForecasts;
-(void)setHourlyForecasts:(id)arg1 ;
-(void)addUpdateObserver:(id)arg1 ;
-(void)removeUpdateObserver:(id)arg1 ;
-(float)visibility;
-(int)precipitationForecast;
-(float)feelsLike;
-(NSString *)deeplink;
-(int)weatherDataAge;
-(void)finishedUpdating:(int)arg1 statusDetail:(unsigned long long)arg2 ;
-(void)setDataCelsius:(BOOL)arg1 ;
-(void)setFeelsLike:(float)arg1 ;
-(void)setHumidity:(float)arg1 ;
-(void)setPressure:(float)arg1 ;
-(void)setPressureRising:(long long)arg1 ;
-(void)setUVIndex:(unsigned long long)arg1 ;
-(void)setPrecipitationPast24Hours:(double)arg1 ;
-(void)addUpdateWarning:(unsigned long long)arg1 ;
-(void)setObservationTime:(unsigned long long)arg1 ;
-(void)clearForecasts;
-(void)setIsHourlyDataCelsius:(BOOL)arg1 ;
-(void)setDayForecasts:(id)arg1 ;
-(void)setSunriseTime:(unsigned long long)arg1 ;
-(void)setSunsetTime:(unsigned long long)arg1 ;
-(void)setDeeplink:(NSString *)arg1 ;
-(void)setLastUpdateWarning:(unsigned long long)arg1 ;
-(void)_clearAutoUpdateTimer;
-(BOOL)isLocalWeatherCity;
-(id)windDirectionAsString:(double)arg1 ;
-(float)humidity;
-(NSHashTable *)cityUpdateObservers;
-(void)setCityUpdateObservers:(NSHashTable *)arg1 ;
-(long long)timeDigit;
-(void)setIsUpdating:(BOOL)arg1 ;
-(void)_updateTimeZone;
-(BOOL)isUpdatingTimeZone;
-(NSDate *)timeZoneUpdateDate;
-(void)setUpdatingTimeZone:(BOOL)arg1 ;
-(void)setTimeZoneUpdateDate:(NSDate *)arg1 ;
-(id)dayForecasts;
-(unsigned long long)lastUpdateWarning;
-(void)setLastUpdateStatus:(int)arg1 ;
-(unsigned long long)lastUpdateDetail;
-(void)setLastUpdateDetail:(unsigned long long)arg1 ;
-(void)discardDataIfNeeded;
-(unsigned long long)observationTime;
-(unsigned long long)sunsetTime;
-(unsigned long long)sunriseTime;
-(BOOL)isDataCelsius;
-(int)lastUpdateStatus;
-(double)distanceToLatitude:(double)arg1 longitude:(double)arg2 ;
-(double)distanceToLocation:(id)arg1 ;
-(id)naturalLanguageDescriptionWithDescribedCondition:(out long long*)arg1 ;
-(BOOL)isDay;
-(long long)primaryConditionForRange:(NSRange)arg1 ;
-(long long)locationOfTime:(long long)arg1 ;
-(void)setAutoUpdate:(BOOL)arg1 ;
-(void)setIsDay:(BOOL)arg1 ;
-(void)localWeatherDidBeginUpdate;
-(void)addDayForecast:(id)arg1 ;
-(void)addHourlyForecast:(id)arg1 ;
-(BOOL)isUpdatingOrNoData;
-(id)cityAndState;
-(NSString *)woeid;
-(void)setWoeid:(NSString *)arg1 ;
-(BOOL)populateWithDataFromCity:(id)arg1 ;
-(BOOL)containsLatitude:(double)arg1 longitude:(double)arg2 ;
-(BOOL)isDuplicateOfCity:(id)arg1 ;
-(id)naturalLanguageDescription;
-(void)_generateLocalizableStrings;
-(void)setIsLocalWeatherCity:(BOOL)arg1 ;
-(double)precipitationPast24Hours;
-(BOOL)isHourlyDataCelsius;
-(long long)pressureRising;
-(BOOL)isRequestedByFrameworkClient;
-(void)setIsRequestedByFrameworkClient:(BOOL)arg1 ;
-(BOOL)lockedForDemoMode;
-(void)setLockedForDemoMode:(BOOL)arg1 ;
-(NSTimer *)autoUpdateTimer;
-(void)setAutoUpdateTimer:(NSTimer *)arg1 ;
@end

