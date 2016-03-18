/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LDAPSearchSettings : NSObject {

	NSString* _searchDescription;
	NSString* _searchBase;
	long long _scope;

}

@property (nonatomic,retain) NSString * searchDescription;              //@synthesize searchDescription=_searchDescription - In the implementation block
@property (nonatomic,retain) NSString * searchBase;                     //@synthesize searchBase=_searchBase - In the implementation block
@property (assign,nonatomic) long long scope;                           //@synthesize scope=_scope - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(NSString *)searchDescription;
-(void)setSearchDescription:(NSString *)arg1 ;
-(id)initWithSettingsDict:(id)arg1 ;
-(BOOL)hasSameScopeAndBaseAsOther:(id)arg1 ;
-(void)setSearchBase:(NSString *)arg1 ;
-(NSString *)searchBase;
-(id)settingsDict;
@end

