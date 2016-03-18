/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICAccount, NSString;

@interface ICAccountProxy : NSObject <ICNoteContainer> {

	ICAccount* _account;

}

@property (retain) ICAccount * account;                             //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountProxyWithAccount:(id)arg1 ;
-(BOOL)isDeleted;
-(long long)compare:(id)arg1 ;
-(id)visibleNotes;
-(id)predicateForVisibleNotes;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)visibleNoteContainerChildren;
-(BOOL)isLeaf;
-(id)initWithAccount:(id)arg1 ;
-(id)accountName;
-(void)setAccount:(ICAccount *)arg1 ;
-(ICAccount *)account;
@end

