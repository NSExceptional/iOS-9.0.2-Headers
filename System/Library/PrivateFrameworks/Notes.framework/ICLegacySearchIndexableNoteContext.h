/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/ICSearchIndexableNoteContext.h>

@class NoteContext;

@interface ICLegacySearchIndexableNoteContext : ICSearchIndexableNoteContext {

	BOOL _isMainContext;
	NoteContextRef _noteContext;

}

@property (assign,nonatomic,__weak) NoteContext * noteContext;              //@synthesize noteContext=_noteContext - In the implementation block
@property (assign,nonatomic) BOOL isMainContext;                            //@synthesize isMainContext=_isMainContext - In the implementation block
-(id)contextIdentifier;
-(id)initWithNoteContext:(NoteContextRef)arg1 isMainContext:(BOOL)arg2 ;
-(void)setIsMainContext:(BOOL)arg1 ;
-(void)setNoteContext:(NoteContext *)arg1 ;
-(NoteContext *)noteContext;
-(BOOL)isMainContext;
@end

