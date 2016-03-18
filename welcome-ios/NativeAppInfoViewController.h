#import <UIKit/UIKit.h>

@interface NativeAppInfoViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIBarButtonItem *sidebarButton;

@property (weak, nonatomic) IBOutlet UILabel *couldAppName;
@property (weak, nonatomic) IBOutlet UILabel *couldDomain;
@property (weak, nonatomic) IBOutlet UILabel *couldEnv;
@property (weak, nonatomic) IBOutlet UILabel *couldPort;

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loading;

@end
