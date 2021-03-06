/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>
+(id)__ck_currentLocale;
+(void)__ck_setTestLocale:(id)arg1 ;
+(id)currentDeviceLanguageForFacebook;
+(id)_localeOverridesForLocaleWithIdentifier:(id)arg1 ;
+(void)_mapkit_overrideDistanceUnit:(long long)arg1 ;
+(long long)_vk_indexForLocale:(id)arg1 ;
+(id)localeForBundleLanguage:(id)arg1 ;
+(id)deviceLanguageLocale;
+(void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1 ;
+(id)addLikelySubtagsForLocaleIdentifier:(id)arg1 ;
+(id)renderableLanguagesFromList:(id)arg1 ;
+(id)validateLocale:(id)arg1 ;
+(id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1 ;
+(void)updateShouldShowPreferredLanguages:(BOOL)arg1 ;
+(void)setLocaleAndResetTimeFormat:(id)arg1 ;
+(id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3 ;
+(id)renderableUILanguages;
+(id)string:(id)arg1 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(id)arg2 secondLanguageIdentifier:(id)arg3 thirdLanguageIdentifier:(id)arg4 ;
+(id)renderableLocaleLanguages;
+(void)setLocaleAfterLanguageChange:(id)arg1 ;
+(BOOL)localeLanguageMatchesPrimaryLanguage;
+(BOOL)shouldShowPreferredLanguages;
+(void)enableDefaultKeyboardForPreferredLanguages;
+(id)canonicalLocaleIdentifierFromComponents:(id)arg1 ;
+(id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2 ;
+(void)setLocaleOnly:(id)arg1 ;
+(void)resetTimeFormat;
+(void)setLocaleAfterRegionChange:(id)arg1 ;
+(id)supportedCJLanguageIdentifiers;
+(void)setLanguageToPreferredLanguages:(id)arg1 fallback:(id)arg2 ;
+(id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1 ;
+(id)deviceLanguageIdentifier;
+(void)setPreferredLanguages:(id)arg1 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)systemLanguages;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)autoupdatingCurrentLocale;
+(id)commonISOCurrencyCodes;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)internetServicesRegion;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)currentLocale;
+(id)systemLocale;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)preferredLanguages;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)ISOCountryCodes;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)ISOCurrencyCodes;
+(id)availableLocaleIdentifiers;
+(id)ISOLanguageCodes;
-(BOOL)_mapkit_distanceUsesMetricSystem;
-(BOOL)_mapkit_useYardsForShortDistances;
-(id)_mapkit_objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)_prefs;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKey:(id)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localeIdentifier;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
@end

