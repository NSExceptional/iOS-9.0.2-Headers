/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, NSDate, GKPlayerInternal, NSData, NSArray, GKGameInternal;

@interface GKTurnBasedMatchInternal : GKInternalRepresentation {

	NSString* _matchID;
	NSString* _status;
	unsigned _state;
	NSString* _message;
	NSDictionary* _localizableMessage;
	NSString* _reason;
	NSDate* _creationDate;
	NSDate* _lastTurnDate;
	NSDate* _deletionDate;
	GKPlayerInternal* _currentPlayer;
	NSString* _lastTurnPlayerID;
	NSData* _matchData;
	NSString* _matchDataVersion;
	NSArray* _participants;
	NSString* _bundleID;
	NSString* _bundleVersion;
	GKGameInternal* _game;
	NSArray* _exchanges;
	unsigned _turnNumber;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	char _currentParticipant;

}

@property (nonatomic,retain) NSString * matchID;                             //@synthesize matchID=_matchID - In the implementation block
@property (nonatomic,retain) NSString * status;                              //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastTurnDate;                          //@synthesize lastTurnDate=_lastTurnDate - In the implementation block
@property (nonatomic,retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned char minPlayers;                       //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) unsigned char maxPlayers;                       //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (nonatomic,retain) NSDate * deletionDate;                          //@synthesize deletionDate=_deletionDate - In the implementation block
@property (assign,nonatomic) char currentParticipant;                        //@synthesize currentParticipant=_currentParticipant - In the implementation block
@property (assign,nonatomic) unsigned turnNumber;                            //@synthesize turnNumber=_turnNumber - In the implementation block
@property (nonatomic,retain) NSString * lastTurnPlayerID;                    //@synthesize lastTurnPlayerID=_lastTurnPlayerID - In the implementation block
@property (nonatomic,retain) NSData * matchData;                             //@synthesize matchData=_matchData - In the implementation block
@property (nonatomic,retain) NSString * matchDataVersion;                    //@synthesize matchDataVersion=_matchDataVersion - In the implementation block
@property (nonatomic,retain) NSArray * participants;                         //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSArray * exchanges;                            //@synthesize exchanges=_exchanges - In the implementation block
@property (nonatomic,retain) GKGameInternal * game;                          //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * currentPlayer;               //@synthesize currentPlayer=_currentPlayer - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSString *)bundleID;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)reason;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(NSArray *)participants;
-(id)descriptionSubstitutionMap;
-(long long)previousParticipantIndex;
-(unsigned char)minPlayers;
-(unsigned char)maxPlayers;
-(void)setMaxPlayers:(unsigned char)arg1 ;
-(void)setMinPlayers:(unsigned char)arg1 ;
-(NSString *)matchID;
-(NSArray *)exchanges;
-(GKPlayerInternal *)currentPlayer;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(NSData *)matchData;
-(void)setCurrentParticipant:(char)arg1 ;
-(void)setMatchData:(NSData *)arg1 ;
-(long long)localPlayerParticipantIndex;
-(long long)activeExchangeCount;
-(void)setMatchID:(NSString *)arg1 ;
-(void)setCurrentPlayer:(GKPlayerInternal *)arg1 ;
-(void)setLastTurnDate:(NSDate *)arg1 ;
-(unsigned)turnNumber;
-(void)setTurnNumber:(unsigned)arg1 ;
-(NSString *)lastTurnPlayerID;
-(void)setLastTurnPlayerID:(NSString *)arg1 ;
-(NSString *)matchDataVersion;
-(void)setMatchDataVersion:(NSString *)arg1 ;
-(void)setExchanges:(NSArray *)arg1 ;
-(void)setGame:(GKGameInternal *)arg1 ;
-(GKGameInternal *)game;
-(char)currentParticipant;
-(NSDate *)lastTurnDate;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSDate *)deletionDate;
-(void)setDeletionDate:(NSDate *)arg1 ;
@end

