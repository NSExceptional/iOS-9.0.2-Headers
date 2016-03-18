/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseStatement, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject {

	ML3DatabaseStatement* _statement;
	NSDictionary* _columnNameIndexMap;
	unsigned long long _limitIndex;
	NSString* _limitProperty;
	long long _limitValue;

}

@property (nonatomic,copy) NSString * limitProperty;              //@synthesize limitProperty=_limitProperty - In the implementation block
@property (assign,nonatomic) long long limitValue;                //@synthesize limitValue=_limitValue - In the implementation block
-(long long)int64ValueForFirstRowAndColumn;
-(id)init;
-(id)rows;
-(BOOL)hasAtLeastOneRow;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(id)objectsInColumn:(unsigned long long)arg1 ;
-(id)objectForFirstRowAndColumn;
-(id)stringValueForFirstRowAndColumn;
-(void)setLimitValue:(long long)arg1 ;
-(id)_statement;
-(unsigned long long)indexForColumnName:(id)arg1 ;
-(void)setLimitProperty:(NSString *)arg1 ;
-(id)columnNameIndexMap;
-(id)initWithStatement:(id)arg1 ;
-(void)setLimitProperty:(id)arg1 limitValue:(long long)arg2 ;
-(NSString *)limitProperty;
-(long long)limitValue;
@end

