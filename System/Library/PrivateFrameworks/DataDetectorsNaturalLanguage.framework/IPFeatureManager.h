/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@interface IPFeatureManager : NSObject
+(void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)dataDetectorsFeatureExtractor;
+(id)featuresForTextUnit:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4 ;
+(id)_sortedFeaturesByRange:(id)arg1 ;
+(id)featureExtractorsExceptDataDetectorsExtractor;
+(id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(NSRange)arg2 ;
+(unsigned long long)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2 ;
+(id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 ;
+(BOOL)shouldLog;
+(id)subjectEventVocabularyPositiveKeyword:(id)arg1 ;
+(BOOL)isNaturalLanguageEventDetectionEnabled;
+(id)subjectEventVocabularyRejectionKeyword:(id)arg1 ;
+(BOOL)isBlacklistedSender:(id)arg1 ;
+(BOOL)shouldReplaceSendDateWithCurrentDate;
+(unsigned long long)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2 ;
+(BOOL)features:(id)arg1 containDateOlderThan:(id)arg2 ;
+(BOOL)isEventProposalFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 eventIsTimeDependent:(BOOL)arg4 extractedFromSubject:(BOOL)arg5 ;
+(BOOL)isDateAroundNoon:(id)arg1 ;
+(id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 ;
+(id)linksAndPhoneNumbersStringsFromFeatures:(id)arg1 ;
+(id)stitchedEventsFromEvents:(id)arg1 ;
+(id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2 ;
+(void)normalizedEvents:(id)arg1 ;
+(id)bestEventFromEvents:(id)arg1 ;
+(id)normalizedAllDayDateFromDate:(id)arg1 ;
+(id)descriptionForScanResultType:(unsigned long long)arg1 ;
+(void)_scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)sharedFeatureManager;
+(id)featuresForTextUnit:(id)arg1 inMessageUnit:(id)arg2 ;
+(id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(unsigned long long)featureSentencePolarityForFeatureAtIndex:(unsigned long long)arg1 inFeatures:(id)arg2 ;
+(void)scanEventsInMessageUnits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

