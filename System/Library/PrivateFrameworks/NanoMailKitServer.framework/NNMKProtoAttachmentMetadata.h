/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying> {

	NSString* _contentId;
	NSString* _fileName;
	unsigned _fileSize;
	float _imageHeight;
	float _imageWidth;
	unsigned _type;
	BOOL _renderOnClient;
	SCD_Struct_NN8 _has;

}

@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;                 //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) unsigned fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasRenderOnClient; 
@property (assign,nonatomic) BOOL renderOnClient;                 //@synthesize renderOnClient=_renderOnClient - In the implementation block
@property (assign,nonatomic) BOOL hasImageWidth; 
@property (assign,nonatomic) float imageWidth;                    //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) BOOL hasImageHeight; 
@property (assign,nonatomic) float imageHeight;                   //@synthesize imageHeight=_imageHeight - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setContentId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasFileSize:(BOOL)arg1 ;
-(BOOL)hasFileSize;
-(BOOL)hasContentId;
-(BOOL)renderOnClient;
-(void)setRenderOnClient:(BOOL)arg1 ;
-(BOOL)hasFileName;
-(void)setHasRenderOnClient:(BOOL)arg1 ;
-(BOOL)hasRenderOnClient;
-(void)setHasImageWidth:(BOOL)arg1 ;
-(BOOL)hasImageWidth;
-(void)setHasImageHeight:(BOOL)arg1 ;
-(BOOL)hasImageHeight;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(unsigned)fileSize;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(void)setImageWidth:(float)arg1 ;
-(void)setImageHeight:(float)arg1 ;
-(float)imageWidth;
-(float)imageHeight;
-(void)setFileSize:(unsigned)arg1 ;
-(NSString *)contentId;
@end

