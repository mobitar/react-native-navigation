#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RNNStore.h"

@interface RNNNavigationStackManager : NSObject

-(instancetype)initWithStore:(RNNStore*)store;

-(void)push:(UIViewController*)newTop onTop:(UIViewController*)currentTop animated:(BOOL)animated;
-(void)pop:(UIViewController*)vc animated:(BOOL)animated;

@end