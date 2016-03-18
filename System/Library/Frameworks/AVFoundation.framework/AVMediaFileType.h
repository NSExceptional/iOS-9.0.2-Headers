/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface AVMediaFileType : NSObject <NSCopying> {

	NSString* _uti;
	long long _supportsSampleReferencesOnce;
	BOOL _supportsSampleReferences;

}

@property (nonatomic,readonly) NSString * defaultFileExtension; 
@property (nonatomic,readonly) NSSet * supportedMediaTypes; 
@property (nonatomic,readonly) BOOL supportsSampleReferences; 
@property (nonatomic,readonly) NSString * UTI; 
@property (nonatomic,readonly) NSString * figFormatReaderFileFormat; 
@property (nonatomic,readonly) unsigned audioFileTypeID; 
+(id)allFileTypeIdentifiers;
+(id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)mediaFileTypeWithFileTypeIdentifier:(id)arg1 ;
+(id)isoFileTypes;
+(void)initialize;
-(BOOL)supportsSampleReferences;
-(NSString *)figFormatReaderFileFormat;
-(NSSet *)supportedMediaTypes;
-(BOOL)supportsFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(unsigned)audioFileTypeID;
-(id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSString *)defaultFileExtension;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UTI;
@end

