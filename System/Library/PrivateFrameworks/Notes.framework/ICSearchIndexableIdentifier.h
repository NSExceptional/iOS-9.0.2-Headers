/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICSearchIndexableNoteContextIdentifier, NSString, NSManagedObjectContext;

@interface ICSearchIndexableIdentifier : NSObject <NSCopying> {

	ICSearchIndexableNoteContextIdentifier* _contextIdentifier;
	NSString* _objectIdentifier;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,copy,readonly) ICSearchIndexableNoteContextIdentifier * contextIdentifier;              //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectIdentifier;                                             //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) NSManagedObjectContext * managedObjectContext;                         //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(ICSearchIndexableNoteContextIdentifier *)contextIdentifier;
-(BOOL)forAnyContext;
-(id)initWithContextIdentifier:(id)arg1 objectIdentifier:(id)arg2 managedObjectContext:(id)arg3 ;
-(id)initForAnyContextWithObjectIdentifier:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)hasContextIdentifier:(id)arg1 ;
-(id)specificIdentifierForContextIdentifier:(id)arg1 ;
-(NSString *)objectIdentifier;
@end

