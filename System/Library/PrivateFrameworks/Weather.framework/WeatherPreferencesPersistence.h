/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WeatherPreferencesPersistence <NSObject>
@required
-(id)arrayForKey:(id)arg1;
-(id)objectForKey:(id)arg1;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(void)synchronize;
-(BOOL)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2;
-(id)dictionaryForKey:(id)arg1;

@end
