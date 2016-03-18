/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSString;

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	BOOL _shouldPerformAnotherBatch;

}

@property (nonatomic,readonly) BOOL shouldPerformAnotherBatch;              //@synthesize shouldPerformAnotherBatch=_shouldPerformAnotherBatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(BOOL)shouldPerformAnotherBatch;
-(void)performAfterSavingRecords:(/*^block*/id)arg1 ;
-(unsigned long long)startActivity;
@end

