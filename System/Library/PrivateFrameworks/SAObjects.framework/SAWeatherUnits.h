/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherUnits : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * distanceUnits; 
@property (nonatomic,copy) NSString * pressureUnits; 
@property (nonatomic,copy) NSString * speedUnits; 
@property (nonatomic,copy) NSString * temperatureUnits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)units;
+(id)unitsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)distanceUnits;
-(void)setDistanceUnits:(NSString *)arg1 ;
-(NSString *)pressureUnits;
-(void)setPressureUnits:(NSString *)arg1 ;
-(NSString *)speedUnits;
-(void)setSpeedUnits:(NSString *)arg1 ;
-(NSString *)temperatureUnits;
-(void)setTemperatureUnits:(NSString *)arg1 ;
@end

