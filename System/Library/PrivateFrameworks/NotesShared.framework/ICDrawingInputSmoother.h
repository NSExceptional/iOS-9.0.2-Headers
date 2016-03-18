/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/ICDrawingInputFilter.h>

@protocol OS_dispatch_queue, ICDrawingInputFilter;
@class NSObject, NSString;

@interface ICDrawingInputSmoother : NSObject <ICDrawingInputFilter> {

	unsigned long long _immutableInputCount;
	unsigned long long _immutableCount;
	unsigned long long _lastInputIndex;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _inputPoints;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _outputPoints;
	NSObject*<OS_dispatch_queue> _outputQueue;
	double _smoothingThreshold;
	double _inputScale;
	NSObject*<ICDrawingInputFilter> _inputProvider;

}

@property (nonatomic,retain) NSObject*<ICDrawingInputFilter> inputProvider;              //@synthesize inputProvider=_inputProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputScale:(double)arg1 ;
-(id)init;
-(void)reset;
-(void)setInputProvider:(NSObject*<ICDrawingInputFilter>)arg1 ;
-(void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 ;
-(unsigned long long)copyUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)arg2 onQueue:(id)arg3 ;
-(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)getUpdatedRangeFromIndex:(inout unsigned long long*)arg1 ;
-(NSObject*<ICDrawingInputFilter>)inputProvider;
-(void)smooth;
-(void)fetchInput;
-(void)smoothCurvaturesDistance:(vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> >*)arg1 ;
@end

