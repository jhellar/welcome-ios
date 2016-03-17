#import <UIKit/UIKit.h>

@interface CallCloudViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIBarButtonItem *sidebarButton;

@property (weak, nonatomic) IBOutlet UIButton *callButton;
@property (weak, nonatomic) IBOutlet UITextView *result;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loading;


@end
