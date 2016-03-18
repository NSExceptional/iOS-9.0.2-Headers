/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _remoteURL;
	NSData* _cachedData;

}

@property (nonatomic,retain) NSURL * remoteURL;                //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSData * cachedData;              //@synthesize cachedData=_cachedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDirectory;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(BOOL)isSymbolicLink;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)symbolicLinkDestinationURL;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)serializedRepresentation;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)regularFileContents;
-(id)preferredFilename;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(void)setCachedData:(NSData *)arg1 ;
-(NSData *)cachedData;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(id)initWithRemoteURL:(id)arg1 ;
-(id)dataWithError:(id*)arg1 ;
-(id)fileAttributes;
-(id)filename;
@end

