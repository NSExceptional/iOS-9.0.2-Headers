/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>

@class NSMutableSet, NSMutableArray;

@interface LDAPAccount : DAAccount {

	NSMutableSet* _searchTaskSet;
	NSMutableArray* _mutableSearchSettings;

}

@property (nonatomic,retain) NSMutableSet * searchTaskSet;                        //@synthesize searchTaskSet=_searchTaskSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSearchSettings;              //@synthesize mutableSearchSettings=_mutableSearchSettings - In the implementation block
-(void)addSearchSettings:(id)arg1 ;
-(void)removeSearchSettings:(id)arg1 ;
-(void)ingestBackingAccountInfoProperties;
-(BOOL)isLDAPAccount;
-(void)setSearchTaskSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)searchTaskSet;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(void)setMutableSearchSettings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableSearchSettings;
-(id)connectionURLWithSSL:(BOOL)arg1 ;
-(void)ldapSearchTask:(id)arg1 finishedWithError:(id)arg2 foundItems:(id)arg3 ;
-(void)ldapGetDefaultSearchBaseTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 defaultSearchBase:(id)arg4 ;
-(id)searchSettings;
-(id)connectionURL;
@end

