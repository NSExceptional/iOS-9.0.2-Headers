/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString, NSDate;

@interface GKScoreInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	NSString* _leaderboardIdentifier;
	NSString* _groupLeaderboardIdentifier;
	NSString* _formattedValue;
	NSDate* _date;
	long long _value;
	unsigned long long _context;
	unsigned _rank;
	BOOL _valueSet;

}

@property (nonatomic,readonly) NSString * playerID; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * groupCategory; 
@property (nonatomic,retain) GKPlayerInternal * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * leaderboardIdentifier;                   //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (nonatomic,retain) NSString * groupLeaderboardIdentifier;              //@synthesize groupLeaderboardIdentifier=_groupLeaderboardIdentifier - In the implementation block
@property (nonatomic,retain) NSString * formattedValue;                          //@synthesize formattedValue=_formattedValue - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long context;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned rank;                                      //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL valueSet;                                      //@synthesize valueSet=_valueSet - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)setGroupCategory:(NSString *)arg1 ;
-(NSString *)groupCategory;
-(NSString *)playerID;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)player;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)context;
-(void)setDate:(NSDate *)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
-(id)serverRepresentation;
-(NSString *)groupLeaderboardIdentifier;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(void)setGroupLeaderboardIdentifier:(NSString *)arg1 ;
-(void)setFormattedValue:(NSString *)arg1 ;
-(BOOL)valueSet;
-(void)setValueSet:(BOOL)arg1 ;
-(NSString *)formattedValue;
-(NSString *)leaderboardIdentifier;
-(unsigned)rank;
-(void)setRank:(unsigned)arg1 ;
@end

