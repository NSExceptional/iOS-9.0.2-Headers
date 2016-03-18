/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDate, NSNumber;

@interface DEAttachmentItem : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSURL* _path;
	NSDate* _modificationDate;
	NSNumber* _filesize;
	NSNumber* _shouldCompress;
	NSURL* _attachedPath;
	NSString* _attachmentType;
	NSNumber* _deleteOnAttach;

}

@property (nonatomic,retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSURL * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * filesize;                    //@synthesize filesize=_filesize - In the implementation block
@property (nonatomic,retain) NSNumber * shouldCompress;              //@synthesize shouldCompress=_shouldCompress - In the implementation block
@property (nonatomic,retain) NSURL * attachedPath;                   //@synthesize attachedPath=_attachedPath - In the implementation block
@property (nonatomic,copy) NSString * attachmentType;                //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,copy) NSNumber * deleteOnAttach;                //@synthesize deleteOnAttach=_deleteOnAttach - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attachmentWithPath:(id)arg1 ;
+(id)attachmentWithPathURL:(id)arg1 ;
+(id)attachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4 ;
+(id)newAttachmentWithPath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSURL *)path;
-(NSDate *)modificationDate;
-(void)detach;
-(void)setPath:(NSURL *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)displayName;
-(void)setAttachmentType:(NSString *)arg1 ;
-(NSNumber *)shouldCompress;
-(void)setShouldCompress:(NSNumber *)arg1 ;
-(id)initWithPathURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4 ;
-(id)writeAssetToDiskWithURL:(id)arg1 toDirectory:(id)arg2 ;
-(NSNumber *)filesize;
-(void)setFilesize:(NSNumber *)arg1 ;
-(void)setAttachedPath:(NSURL *)arg1 ;
-(NSURL *)attachedPath;
-(NSNumber *)deleteOnAttach;
-(id)attachWithDestinationDir:(id)arg1 ;
-(void)setDeleteOnAttach:(NSNumber *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)attachmentType;
@end

