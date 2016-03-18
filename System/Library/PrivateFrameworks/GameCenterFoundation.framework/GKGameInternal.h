/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGameDescriptor.h>

@class NSString, NSDictionary, GKStoreItemInternal;

@interface GKGameInternal : GKGameDescriptor {

	NSString* _name;
	NSDictionary* _icons;
	NSString* _defaultLeaderboardIdentifier;
	GKStoreItemInternal* _storeItem;
	SCD_Union_GK6 _flags;
	unsigned short _numberOfLeaderboards;
	unsigned short _numberOfLeaderboardSets;
	unsigned short _numberOfAchievements;
	unsigned short _maxAchievementPoints;

}

@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                                 //@synthesize icons=_icons - In the implementation block
@property (assign,nonatomic) unsigned char platform; 
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered; 
@property (assign,nonatomic) BOOL supportsLeaderboards; 
@property (assign,nonatomic) BOOL hasAggregateLeaderboard; 
@property (assign,nonatomic) unsigned short numberOfLeaderboards;                  //@synthesize numberOfLeaderboards=_numberOfLeaderboards - In the implementation block
@property (nonatomic,retain) NSString * defaultLeaderboardIdentifier;              //@synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsLeaderboardSets; 
@property (assign,nonatomic) unsigned short numberOfLeaderboardSets;               //@synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets - In the implementation block
@property (assign,nonatomic) BOOL supportsAchievements; 
@property (assign,nonatomic) unsigned short numberOfAchievements;                  //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned short maxAchievementPoints;                  //@synthesize maxAchievementPoints=_maxAchievementPoints - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiplayer; 
@property (assign,nonatomic) BOOL supportsTurnBasedMultiplayer; 
@property (assign,getter=isValid,nonatomic) BOOL valid; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem;                      //@synthesize storeItem=_storeItem - In the implementation block
@property (assign,nonatomic) unsigned flags; 
+(id)secureCodedPropertyKeys;
-(unsigned short)numberOfCategories;
-(id)defaultCategory;
-(GKStoreItemInternal *)storeItem;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isValid;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSDictionary *)icons;
-(void)setValid:(BOOL)arg1 ;
-(void)setPlatform:(unsigned char)arg1 ;
-(id)serverRepresentation;
-(BOOL)supportsLeaderboardSets;
-(BOOL)supportsMultiplayer;
-(BOOL)hasAggregateLeaderboard;
-(unsigned short)numberOfLeaderboardSets;
-(unsigned short)numberOfAchievements;
-(BOOL)supportsTurnBasedMultiplayer;
-(void)setPrerendered:(BOOL)arg1 ;
-(void)setSupportsLeaderboards:(BOOL)arg1 ;
-(void)setSupportsLeaderboardSets:(BOOL)arg1 ;
-(void)setHasAggregateLeaderboard:(BOOL)arg1 ;
-(void)setSupportsAchievements:(BOOL)arg1 ;
-(void)setSupportsMultiplayer:(BOOL)arg1 ;
-(void)setSupportsTurnBasedMultiplayer:(BOOL)arg1 ;
-(NSString *)defaultLeaderboardIdentifier;
-(void)setDefaultLeaderboardIdentifier:(NSString *)arg1 ;
-(unsigned short)numberOfLeaderboards;
-(void)setNumberOfLeaderboards:(unsigned short)arg1 ;
-(void)setNumberOfLeaderboardSets:(unsigned short)arg1 ;
-(void)setNumberOfAchievements:(unsigned short)arg1 ;
-(void)setMaxAchievementPoints:(unsigned short)arg1 ;
-(unsigned short)maxAchievementPoints;
-(BOOL)supportsLeaderboards;
-(BOOL)supportsAchievements;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(unsigned char)platform;
-(BOOL)isPrerendered;
@end

