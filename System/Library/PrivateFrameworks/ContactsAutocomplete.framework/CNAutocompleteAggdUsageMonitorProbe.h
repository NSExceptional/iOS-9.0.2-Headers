/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteUsageMonitorProbe.h>

@class CNAutocompleteAggdProbe, NSNumber, NSString;

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe> {

	CNAutocompleteAggdProbe* _aggdProbe;
	NSNumber* _selectedIndex;
	NSNumber* _lengthOfSearchString;
	NSNumber* _sourceType;

}

@property (nonatomic,retain) CNAutocompleteAggdProbe * aggdProbe;              //@synthesize aggdProbe=_aggdProbe - In the implementation block
@property (nonatomic,retain) NSNumber * selectedIndex;                         //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) NSNumber * lengthOfSearchString;                  //@synthesize lengthOfSearchString=_lengthOfSearchString - In the implementation block
@property (nonatomic,retain) NSNumber * sourceType;                            //@synthesize sourceType=_sourceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(NSNumber *)sourceType;
-(void)setSourceType:(NSNumber *)arg1 ;
-(void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1 ;
-(void)recordUserSelectedIndex:(unsigned long long)arg1 ;
-(void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1 ;
-(void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1 ;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1 ;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2 ;
-(void)recordUserSawPredictions;
-(id)initWithAggdProbe:(id)arg1 ;
-(CNAutocompleteAggdProbe *)aggdProbe;
-(void)setAggdProbe:(CNAutocompleteAggdProbe *)arg1 ;
-(void)setLengthOfSearchString:(NSNumber *)arg1 ;
-(id)keyWithPredictionCategoryPrefix:(id)arg1 ;
-(id)keyWithPrefixedCategoryPrefix:(id)arg1 ;
-(NSNumber *)lengthOfSearchString;
-(id)sourceKeysForSourceType:(unsigned long long)arg1 ;
-(void)sendData;
@end

