/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVCalendar, CalDAVPrincipal;
@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {

	BOOL _shouldTrySyncTokenForBulkUpload;
	CalDAVBulkUploadTaskGroup* _uploadTaskGroup;
	id<CalDAVCalendar> _calendar;
	id<CalDAVPrincipal> _principal;

}

@property (nonatomic,retain) CalDAVBulkUploadTaskGroup * uploadTaskGroup;              //@synthesize uploadTaskGroup=_uploadTaskGroup - In the implementation block
@property (nonatomic,retain) id<CalDAVCalendar> calendar;                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) id<CalDAVPrincipal> principal;                            //@synthesize principal=_principal - In the implementation block
@property (assign,nonatomic) BOOL shouldTrySyncTokenForBulkUpload;                     //@synthesize shouldTrySyncTokenForBulkUpload=_shouldTrySyncTokenForBulkUpload - In the implementation block
-(void)dealloc;
-(void)setCalendar:(id<CalDAVCalendar>)arg1 ;
-(id<CalDAVCalendar>)calendar;
-(void)startTaskGroup;
-(id)dataContentType;
-(id<CalDAVPrincipal>)principal;
-(void)cancelTaskGroup;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(CalDAVBulkUploadTaskGroup *)uploadTaskGroup;
-(BOOL)shouldTrySyncTokenForBulkUpload;
-(void)setShouldTrySyncTokenForBulkUpload:(BOOL)arg1 ;
-(void)_performBulkUpload;
-(void)_performRegularUpload;
-(void)setUploadTaskGroup:(CalDAVBulkUploadTaskGroup *)arg1 ;
@end

