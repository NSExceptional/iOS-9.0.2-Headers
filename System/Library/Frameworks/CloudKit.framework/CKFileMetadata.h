/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface CKFileMetadata : NSObject {

	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSNumber* _modTimeInSeconds;
	NSNumber* _fileSize;

}

@property (nonatomic,retain) NSNumber * deviceID;                      //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                        //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                  //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSNumber * modTimeInSeconds;              //@synthesize modTimeInSeconds=_modTimeInSeconds - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
-(void)setModTimeInSeconds:(NSNumber *)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(NSNumber *)modTimeInSeconds;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
@end

