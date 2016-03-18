/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RKResponseCollection;

@interface RKMessageResponseManager : NSObject {

	RKResponseCollection* _collection;

}

@property (retain) RKResponseCollection * collection;              //@synthesize collection=_collection - In the implementation block
+(id)sharedManager;
-(RKResponseCollection *)collection;
-(void)setCollection:(RKResponseCollection *)arg1 ;
-(id)init;
-(id)_init;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5 ;
-(id)initWithDynamicDataURL:(id)arg1 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4 ;
-(void)flushDynamicData;
-(void)resetRegisteredResponses;
@end

