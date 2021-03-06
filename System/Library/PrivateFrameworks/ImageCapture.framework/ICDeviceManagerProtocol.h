/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDeviceManagerProtocol <NSObject>
@required
-(int)openSession:(id)arg1 contextInfo:(void*)arg2;
-(int)closeSession:(id)arg1 contextInfo:(void*)arg2;
-(int)syncClock:(id)arg1 contextInfo:(void*)arg2;
-(int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)eject:(id)arg1;
-(int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
-(int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)openDevice:(id)arg1 contextInfo:(void*)arg2;
-(int)closeDevice:(id)arg1 contextInfo:(void*)arg2;

@end

