/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSUserDefaults : NSObject {

	id _private;
	void** _reserved[4];

}
+(void)mf_setCompositionServicesPreferenceValue:(id)arg1 forKey:(id)arg2 ;
+(id)mf_copyCompositionServicesPreferenceValueForKey:(id)arg1 ;
+(id)_webkit_preferredLanguageCode;
+(void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
+(id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2 ;
+(id)_IMAppObjectForKey:(id)arg1 ;
+(id)_IMAgentObjectForKey:(id)arg1 ;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(void)_web_defaultsDidChange;
+(id)_web_preferredLanguageCode;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)standardUserDefaults;
-(id)stringValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(id)stringValueSafeForKey:(id)arg1 ;
-(BOOL)boolValueSafeForKey:(id)arg1 ;
-(double)doubleValueSafeForKey:(id)arg1 ;
-(double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(BOOL)boolValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(long long)int64ValueSafeForKey:(id)arg1 ;
-(id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)stringArrayForKey:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)searchList;
-(void)setSearchList:(id)arg1 ;
-(void)addSuiteNamed:(id)arg1 ;
-(void)removeSuiteNamed:(id)arg1 ;
-(id)volatileDomainNames;
-(id)volatileDomainForName:(id)arg1 ;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainNames;
-(void)removePersistentDomainForName:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(oneway void)release;
-(id)objectForKey:(id)arg1 ;
-(id)persistentDomainForName:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(BOOL)synchronize;
-(id)initWithSuiteName:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)registerDefaults:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
@end

