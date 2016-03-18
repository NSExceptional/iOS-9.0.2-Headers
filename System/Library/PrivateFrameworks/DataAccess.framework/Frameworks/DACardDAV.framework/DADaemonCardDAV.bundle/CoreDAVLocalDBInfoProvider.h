/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVLocalDBInfoProvider <CoreDAVTaskGroupDelegate>
@optional
-(BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
-(BOOL)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
-(BOOL)syncDeleteTask:(id)arg1 error:(id)arg2;
-(id)copyLocalETagsForURLToETagDict:(id)arg1 inFolderWithURL:(id)arg2;
-(BOOL)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4;
-(BOOL)syncPostTask:(id)arg1 postedData:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4;
-(BOOL)syncPostTask:(id)arg1 data:(id)arg2 error:(id)arg3;
-(BOOL)syncBulkChangeTask:(id)arg1 parentTaskGroup:(id)arg2 completedWithError:(id)arg3;
-(BOOL)syncBulkChangeTask:(id)arg1 error:(id)arg2;
-(BOOL)syncDeleteTask:(id)arg1 parentTaskGroup:(id)arg2 completedWithError:(id)arg3;

@required
-(id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1;
-(void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
-(void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;

@end

