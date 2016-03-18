/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate, OCDReaderDelegate;
@class TCImportTracing, NSString, NSData, NSError;

@interface OCDReader : NSObject {

	id<TCCancelDelegate> mCancelDelegate;
	id<OCDReaderDelegate> mDelegate;
	BOOL mIsThumbnail;
	TCImportTracing* mTracing;
	NSString* mFileName;
	NSData* mData;
	NSError* mStartError;

}

@property (nonatomic,retain) NSString * fileName; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSError * startError; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (assign,nonatomic) id<OCDReaderDelegate> delegate; 
@property (assign,nonatomic) BOOL isThumbnail; 
@property (nonatomic,retain) TCImportTracing * tracing; 
-(BOOL)start;
-(BOOL)isBinaryReader;
-(id)read;
-(BOOL)verifyFileFormat;
-(void)setDelegate:(id<OCDReaderDelegate>)arg1 ;
-(void)dealloc;
-(id<OCDReaderDelegate>)delegate;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)isThumbnail;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(NSError *)startError;
-(TCImportTracing *)tracing;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(void)setTracing:(TCImportTracing *)arg1 ;
-(void)setStartError:(NSError *)arg1 ;
-(void)setStartErrorMessageFromException:(id)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
@end

