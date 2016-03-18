/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DALDAP/LDAPTask.h>

@protocol OS_ldap_operation;
@class DAContactsSearchQuery, NSMutableArray, NSObject;

@interface LDAPSearchTask : LDAPTask {

	DAContactsSearchQuery* _query;
	NSMutableArray* _foundContacts;
	NSObject*<OS_ldap_operation> _operation;

}

@property (nonatomic,readonly) DAContactsSearchQuery * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundContacts;                      //@synthesize foundContacts=_foundContacts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_ldap_operation> operation;              //@synthesize operation=_operation - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(NSObject*<OS_ldap_operation>)operation;
-(void)setOperation:(NSObject*<OS_ldap_operation>)arg1 ;
-(DAContactsSearchQuery *)query;
-(void)performTask;
-(int)numDownloadedElements;
-(void)_failImmediately;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)_performQuery;
-(id)_copySearchStringPortionForWord:(id)arg1 ;
-(void)_appendKey:(id)arg1 value:(id)arg2 toSearchResultElement:(id)arg3 ;
-(NSMutableArray *)foundContacts;
-(id)_copySearchStringForQueryInput:(id)arg1 ;
-(void)_promptForPasswordDueToError:(id)arg1 ;
-(void)setFoundContacts:(NSMutableArray *)arg1 ;
-(void)disable;
@end

