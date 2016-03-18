/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableData;

@interface PTPStorageInfoDataset : NSObject {

	unsigned short _storageType;
	unsigned short _filesystemType;
	unsigned short _accessCapability;
	unsigned long long _maxCapacity;
	unsigned long long _freeSpaceInBytes;
	unsigned _freeSpaceInImages;
	NSString* _storageDescription;
	NSString* _volumeLabel;
	NSMutableData* _content;
	BOOL _dirty;
	BOOL _readOnlyObject;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)content;
-(void)updateContent;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(unsigned long long)maxCapacity;
-(id)initWithMutableData:(id)arg1 ;
-(unsigned short)accessCapability;
-(void)setStorageType:(unsigned short)arg1 ;
-(unsigned short)filesystemType;
-(void)setFilesystemType:(unsigned short)arg1 ;
-(void)setAccessCapability:(unsigned short)arg1 ;
-(unsigned long long)freeSpaceInBytes;
-(void)setFreeSpaceInBytes:(unsigned long long)arg1 ;
-(unsigned)freeSpaceInImages;
-(void)setFreeSpaceInImages:(unsigned)arg1 ;
-(id)storageDescription;
-(void)setStorageDescription:(id)arg1 ;
-(id)volumeLabel;
-(void)setVolumeLabel:(id)arg1 ;
-(unsigned short)storageType;
-(void)setContent:(id)arg1 ;
@end

