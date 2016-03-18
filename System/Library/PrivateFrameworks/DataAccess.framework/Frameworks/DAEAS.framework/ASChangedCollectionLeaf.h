/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber, NSDictionary;

@interface ASChangedCollectionLeaf : ASItem <NSCoding> {

	BOOL _isResponse;
	BOOL _validateOpeningTokens;
	long long _changeType;
	NSString* _serverID;
	NSString* _instanceID;
	NSString* _clientID;
	NSString* _parentClientID;
	NSNumber* _status;
	NSDictionary* _applicationData;

}

@property (assign,nonatomic) BOOL isResponse;                             //@synthesize isResponse=_isResponse - In the implementation block
@property (assign,nonatomic) BOOL validateOpeningTokens;                  //@synthesize validateOpeningTokens=_validateOpeningTokens - In the implementation block
@property (assign,nonatomic) long long changeType;                        //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * serverID;                         //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSString * instanceID;                       //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                           //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * parentClientID;                     //@synthesize parentClientID=_parentClientID - In the implementation block
@property (nonatomic,copy) NSNumber * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDictionary * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSDictionary *)applicationData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(long long)dataclass;
-(void)loadClientIDs;
-(void)setIsResponse:(BOOL)arg1 ;
-(void)setValidateOpeningTokens:(BOOL)arg1 ;
-(BOOL)validateOpeningTokens;
-(BOOL)isResponse;
-(NSString *)parentClientID;
-(void)setParentClientID:(NSString *)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)instanceID;
-(void)setInstanceID:(NSString *)arg1 ;
-(void)setApplicationData:(NSDictionary *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
@end

