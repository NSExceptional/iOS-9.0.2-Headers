/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSpeakableUtteranceParser.h>
#import <libobjc.A.dylib/AFSpeakableNamespaceProvider.h>

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {

	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	BOOL _useSpeechMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldAutomaticallyProvideFunctions;
-(id)init;
-(void)useSpeechMode:(BOOL)arg1 ;
-(id)stringForExpression:(id)arg1 ;
-(id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2 ;
-(id)_currentTime:(id)arg1 ;
-(id)_currentShortDate:(id)arg1 ;
-(id)_currentLongDate:(id)arg1 ;
-(id)_currentWeekday:(id)arg1 ;
-(id)_tempInWeatherUnits:(id)arg1 ;
-(id)_deviceModel;
-(id)_lowercaseString:(id)arg1 ;
-(id)_callFunction:(id)arg1 withArguments:(id)arg2 ;
-(id)initWithLocale:(id)arg1 ;
@end

