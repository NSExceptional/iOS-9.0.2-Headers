/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_WKDownloadDelegate.h>

@protocol _SFDownloadControllerDelegate;
@class _WKDownload, NSString, NSURL;

@interface _SFDownloadController : NSObject <_WKDownloadDelegate> {

	long long _downloadingFileType;
	_WKDownload* _fileDownload;
	unsigned long long _downloadBackgroundTaskIdentifier;
	NSString* _fileDownloadPath;
	long long _downloadBytesExpected;
	unsigned long long _downloadBytesLoaded;
	NSURL* _fileDownloadSourceURL;
	id<_SFDownloadControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFDownloadControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long downloadingFileType;                                  //@synthesize downloadingFileType=_downloadingFileType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_beginDownloadBackgroundTask:(id)arg1 ;
-(void)_endDownloadBackgroundTask;
-(void)_clearFileDownloadState;
-(long long)downloadingFileType;
-(void)setDownloadingFileType:(long long)arg1 ;
-(void)setDelegate:(id<_SFDownloadControllerDelegate>)arg1 ;
-(id<_SFDownloadControllerDelegate>)delegate;
-(void)_downloadDidStart:(id)arg1 ;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2 ;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3 ;
-(void)_downloadDidFinish:(id)arg1 ;
-(void)_download:(id)arg1 didFailWithError:(id)arg2 ;
@end

