/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKit/PassKit-Structs.h>
@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassFaceTemplate : NSObject {

	double _barcodeVerticalInset;
	PKPassFieldTemplate* _defaultFieldTemplate;
	NSMutableArray* _bucketTemplates;
	CGSize _barcodeMaxSize;

}

@property (assign,nonatomic) double barcodeBottomInset;                               //@synthesize barcodeVerticalInset=_barcodeVerticalInset - In the implementation block
@property (assign,nonatomic) CGSize barcodeMaxSize;                                   //@synthesize barcodeMaxSize=_barcodeMaxSize - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * defaultFieldTemplate;              //@synthesize defaultFieldTemplate=_defaultFieldTemplate - In the implementation block
@property (nonatomic,retain) NSMutableArray * bucketTemplates;                        //@synthesize bucketTemplates=_bucketTemplates - In the implementation block
-(void)setBarcodeBottomInset:(double)arg1 ;
-(void)setBarcodeMaxSize:(CGSize)arg1 ;
-(PKPassFieldTemplate *)defaultFieldTemplate;
-(void)addBucketTemplate:(id)arg1 ;
-(id)templateForBucketAtIndex:(unsigned long long)arg1 ;
-(double)barcodeBottomInset;
-(CGSize)barcodeMaxSize;
-(void)setDefaultFieldTemplate:(PKPassFieldTemplate *)arg1 ;
-(NSMutableArray *)bucketTemplates;
-(void)setBucketTemplates:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

