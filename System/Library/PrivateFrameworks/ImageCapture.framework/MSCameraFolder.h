/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraFolder.h>

@interface MSCameraFolder : ICCameraFolder {

	void* _msCameraFolderProperties;

}

@property (readonly) unsigned long long fsSN; 
@property (readonly) timespec fsCreationTime; 
@property (readonly) timespec fsModificationTime; 
@property (readonly) long long fsSize; 
-(void)dealloc;
-(void)enumerateContent;
-(BOOL)deleteItemFromCamera:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 fsSN:(unsigned long long)arg4 fsCreationTime:(timespec)arg5 fsModificationTime:(timespec)arg6 fsSize:(long long)arg7 fsFlags:(unsigned)arg8 ;
-(unsigned long long)fsSN;
-(timespec)fsCreationTime;
-(long long)fsSize;
-(id)folderMatchingPath:(id)arg1 ;
-(timespec)fsModificationTime;
-(id)itemMatchingName:(id)arg1 fsSN:(unsigned long long)arg2 fsCreationTime:(timespec*)arg3 fsSize:(long long)arg4 ;
-(void)finalize;
@end

