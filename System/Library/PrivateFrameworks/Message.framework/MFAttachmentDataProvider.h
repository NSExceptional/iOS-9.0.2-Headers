/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class NSURL, NSString;

@interface MFAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	NSURL* _url;
	long long _isPartialDownload;

}

@property (retain) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataProviderWithURL:(id)arg1 ;
+(id)dataProviderWithPath:(id)arg1 ;
-(BOOL)exists;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(id)data;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)save:(id)arg1 ;
-(BOOL)_isFileURL;
-(id)_path;
-(id)_fileAttributes:(id)arg1 ;
-(BOOL)_partialDownload;
-(BOOL)_setPartialDownload:(BOOL)arg1 ;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 code:(long long)arg2 ;
-(BOOL)append:(id)arg1 isComplete:(BOOL)arg2 ;
-(void)dataWithRange:(NSRange)arg1 completion:(/*^block*/id)arg2 ;
@end

