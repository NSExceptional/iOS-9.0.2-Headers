/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding> {

	double _destinationCompressionQuality;
	NSURL* _destinationURL;
	CGSize _destinationSize;

}

@property (nonatomic,readonly) CGSize destinationSize;                            //@synthesize destinationSize=_destinationSize - In the implementation block
@property (nonatomic,readonly) double destinationCompressionQuality;              //@synthesize destinationCompressionQuality=_destinationCompressionQuality - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                            //@synthesize destinationURL=_destinationURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)destinationWithSize:(CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3 ;
-(NSURL *)destinationURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CGSize)destinationSize;
-(double)destinationCompressionQuality;
-(id)initWithDestinationSize:(CGSize)arg1 destinationCompressionQuality:(double)arg2 destinationURL:(id)arg3 ;
@end

