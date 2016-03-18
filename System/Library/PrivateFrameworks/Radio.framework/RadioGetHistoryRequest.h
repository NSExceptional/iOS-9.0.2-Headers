/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSNumber, NSString, RadioPlayEventCollection, NSArray;

@interface RadioGetHistoryRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	BOOL _fetchForAccount;
	BOOL _includesAds;
	BOOL _aggregateSessions;
	BOOL _shouldProcessCategories;
	NSNumber* _accountUniqueIdentifier;
	unsigned long long _maxNumberOfTracks;
	long long _stationID;
	NSString* _stationHash;
	RadioPlayEventCollection* _playEventCollection;
	NSArray* _playActivityFeedEvents;

}

@property (nonatomic,copy,readonly) NSNumber * accountUniqueIdentifier;                 //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTracks;                      //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
@property (assign,nonatomic) BOOL fetchForAccount;                                      //@synthesize fetchForAccount=_fetchForAccount - In the implementation block
@property (assign,nonatomic) BOOL includesAds;                                          //@synthesize includesAds=_includesAds - In the implementation block
@property (assign,nonatomic) long long stationID;                                       //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                      //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) BOOL aggregateSessions;                                    //@synthesize aggregateSessions=_aggregateSessions - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;              //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (nonatomic,copy) NSArray * playActivityFeedEvents;                            //@synthesize playActivityFeedEvents=_playActivityFeedEvents - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessCategories;                              //@synthesize shouldProcessCategories=_shouldProcessCategories - In the implementation block
-(void)cancel;
-(id)init;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)stationID;
-(RadioPlayEventCollection *)playEventCollection;
-(NSArray *)playActivityFeedEvents;
-(BOOL)shouldProcessCategories;
-(void)setShouldProcessCategories:(BOOL)arg1 ;
-(unsigned long long)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned long long)arg1 ;
-(id)_newHistoryCategoryWithDictionary:(id)arg1 ;
-(id)_newHistoryItemWithDictionary:(id)arg1 ;
-(BOOL)fetchForAccount;
-(void)setFetchForAccount:(BOOL)arg1 ;
-(BOOL)includesAds;
-(void)setIncludesAds:(BOOL)arg1 ;
-(BOOL)aggregateSessions;
-(void)setAggregateSessions:(BOOL)arg1 ;
-(void)startWithHistoryCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlayActivityFeedEvents:(NSArray *)arg1 ;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(NSString *)stationHash;
-(NSNumber *)accountUniqueIdentifier;
@end

