/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/TTVersionedDocument.h>

@class TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument {

	TTMergeableAttributedString* _mergeableString;

}

@property (nonatomic,retain) TTMergeableAttributedString * mergeableString;              //@synthesize mergeableString=_mergeableString - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(TTMergeableAttributedString *)mergeableString;
-(id)initWithArchive:(const Document*)arg1 andReplicaID:(id)arg2 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(unsigned long long)mergeWithStringVersionedDocument:(id)arg1 ;
-(void)setMergeableString:(TTMergeableAttributedString *)arg1 ;
@end

